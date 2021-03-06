/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@class <BBDataProviderManagerDelegate>, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;

@interface BBDataProviderManager : NSObject <BBRemoteDataProviderDelegate, BBRemoteDataProviderConnectionDelegate> {
    BOOL _allowConnections;
    NSObject<OS_xpc_object> *_connection;
    NSMutableArray *_dataProviderConnections;
    NSMutableDictionary *_dataProviderFactoriesByClass;
    NSMutableDictionary *_dataProvidersBySectionID;
    <BBDataProviderManagerDelegate> *_delegate;
    NSMutableDictionary *_localDataProviders;
    NSMutableDictionary *_offlineDataProvidersByService;
    NSMutableDictionary *_onlineDataProvidersByService;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_remoteDataProviders;
}

@property <BBDataProviderManagerDelegate> * delegate;

- (void)_addDataProvider:(id)arg1 forFactory:(id)arg2 factoryInfo:(id)arg3;
- (void)_addDataProviderClass:(Class)arg1;
- (void)_addDataProviderPlugin:(id)arg1 forFactory:(id)arg2 factoryInfo:(id)arg3;
- (id)_configureDataProvider:(id)arg1;
- (id)_configureSectionInfo:(id)arg1 forDataProvider:(id)arg2;
- (id)_defaultSectionInfoForSection:(id)arg1;
- (void)_loadAllDataProviderPluginBundles;
- (void)_loadDataProviderPluginBundle:(id)arg1;
- (void)_removeDataProvider:(id)arg1;
- (void)_removeDataProviderSectionID:(id)arg1;
- (void)_updateSectionInfo:(id)arg1 withDefaultInfo:(id)arg2;
- (void)dataProviderConnection:(id)arg1 addDataProviderWithSectionID:(id)arg2;
- (void)dataProviderConnection:(id)arg1 connectionStateDidChange:(BOOL)arg2;
- (void)dataProviderConnection:(id)arg1 removeDataProviderWithSectionID:(id)arg2;
- (id)dataProviderForSectionID:(id)arg1;
- (void)dataProviderOperational:(id)arg1;
- (id)dataProviders;
- (void)dealloc;
- (id)delegate;
- (void)factory:(id)arg1 addDataProvider:(id)arg2;
- (void)factory:(id)arg1 removeDataProvider:(id)arg2;
- (id)getSectionInfoForSectionID:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (void)loadAllDataProviders;
- (void)noteSettingsChanged:(id)arg1 forSectionID:(id)arg2;
- (id)rebuildSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)reloadIdentityForSectionID:(id)arg1 withCompletion:(id)arg2;
- (void)setDelegate:(id)arg1;

@end
