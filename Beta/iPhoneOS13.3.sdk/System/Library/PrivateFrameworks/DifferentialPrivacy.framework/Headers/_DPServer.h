/*
 Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

#import <NSObject.h>

@class NSString, NSXPCListener, _DPStorage;

@interface _DPServer : NSObject

{
    NSXPCListener *_listener;
    _DPStorage *_db;
}

@property (nonatomic, readonly) NSXPCListener *listener;
@property (nonatomic, readonly) _DPStorage *db;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)shouldNotRecord:(id)arg1;

- (id)init;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)start;
- (void)recordNumbers:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordBitValues:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordStrings:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)recordWords:(id)arg1 forKey:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)reportsNotYetSubmittedWithReply:(CDUnknownBlockType)arg1;
- (void)retireReports:(id)arg1 withReply:(CDUnknownBlockType)arg2;
- (id)initWithDatabaseDirectoryPath:(id)arg1 reportsDirectoryPath:(id)arg2 enablePeriodicTasks:(_Bool)arg3 enterSandbox:(_Bool)arg4;
- (void)setupPeriodicTasksWith:(id)arg1;
- (void)recordValues:(id)arg1 forKey:(id)arg2 usingSelector:(SEL)arg3;
- (id)reportsNotYetSubmittedInDirecory:(id)arg1;
- (_Bool)retireReports:(id)arg1 inDirectory:(id)arg2;

@end
