/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSString, TRSession;

@interface TRAnisetteDataProvider : NSObject

{
    TRSession *_session;
}

@property (retain, nonatomic) TRSession *session;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSession:(id)arg1;
- (void)provisionAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)syncAnisetteWithSIMData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eraseAnisetteWithCompletion:(CDUnknownBlockType)arg1;
- (void)fetchAnisetteDataAndProvisionIfNecessary:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)legacyAnisetteDataForDSID:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;

@end
