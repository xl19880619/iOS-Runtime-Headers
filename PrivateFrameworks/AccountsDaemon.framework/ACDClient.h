/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
 */

@class ACDDatabase, ACDTelemetryWatchdog, NSMutableDictionary, NSNumber, NSString, NSXPCConnection;

@interface ACDClient : NSObject {
    struct __CFBundle { } *_bundle;
    NSString *_bundleID;
    NSXPCConnection *_connection;
    ACDDatabase *_database;
    BOOL _didManuallySetBundleID;
    NSMutableDictionary *_entitlementChecks;
    NSString *_localizedAppName;
    NSString *_name;
    NSNumber *_pid;
    ACDTelemetryWatchdog *_telemetry;
}

@property(readonly) NSString * adamOrDisplayID;
@property(readonly) struct __CFBundle { }* bundle;
@property(retain) NSString * bundleID;
@property(readonly) NSXPCConnection * connection;
@property(readonly) ACDDatabase * database;
@property(readonly) NSString * localizedAppName;
@property(readonly) NSString * name;
@property(readonly) NSNumber * pid;
@property(retain) ACDTelemetryWatchdog * telemetry;

+ (id)bundleForPID:(int)arg1;
+ (id)clientWithBundleID:(id)arg1;

- (void).cxx_destruct;
- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;
- (id)_displayNameFromSpringBoardForPID:(int)arg1;
- (id)adamOrDisplayID;
- (struct __CFBundle { }*)bundle;
- (id)bundleID;
- (id)connection;
- (id)database;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (BOOL)hasEntitlement:(id)arg1;
- (id)initWithConnection:(id)arg1 database:(id)arg2;
- (id)initWithConnection:(id)arg1;
- (id)localizedAppName;
- (id)name;
- (id)pid;
- (void)setBundleID:(id)arg1;
- (void)setTelemetry:(id)arg1;
- (id)telemetry;

@end
