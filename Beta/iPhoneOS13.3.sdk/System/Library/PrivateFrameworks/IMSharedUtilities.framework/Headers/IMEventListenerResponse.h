/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSError, NSString;

@interface IMEventListenerResponse : NSObject

{
    _Bool _success;
    NSDictionary *_userInfo;
    NSError *_error;
}

@property (nonatomic, getter=didSucceed) _Bool success;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)initWithSuccess:(_Bool)arg1 userInfo:(id)arg2 error:(id)arg3;

@end
