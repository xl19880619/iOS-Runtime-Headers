/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class NSArray, PLAssetContainerChangeNotification, PLPlace;

@interface PLPlaceChangeNotification : PLAssetContainerChangeNotification {
    PLAssetContainerChangeNotification *_backingNotifiation;
    NSArray *_changedObjects;
    PLPlace *_fromPlace;
    PLPlace *_toPlace;
}

+ (id)notificationForFromPlace:(id)arg1 toPlace:(id)arg2 changedObjects:(id)arg3 fromAlbumChangeNotification:(id)arg4;

- (id)_changedObjects;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (struct NSObject { Class x1; }*)album;
- (void)dealloc;
- (id)init;
- (id)initWithFromPlace:(id)arg1 toPlace:(id)arg2 changedObjects:(id)arg3 fromAlbumChangeNotification:(id)arg4;
- (id)object;
- (BOOL)titleDidChange;

@end
