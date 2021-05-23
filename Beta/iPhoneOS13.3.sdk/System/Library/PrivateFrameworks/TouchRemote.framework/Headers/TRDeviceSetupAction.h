/*
 Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface TRDeviceSetupAction : NSObject

{
    NSString *_actionType;
    NSDictionary *_parameters;
}

@property (copy, nonatomic, readonly) NSString *actionType;
@property (copy, nonatomic, readonly) NSDictionary *parameters;
@property (nonatomic, readonly) unsigned long long protocolVersion;

+ (id)actionWithData:(id)arg1 error:(id *)arg2 supportsLegacy:(_Bool)arg3;
+ (id)actionWithActionType:(id)arg1 parameters:(id)arg2;

- (id)init;
- (id)description;
- (id)dataRepresentationWithError:(id *)arg1;
- (id)propertyListRepresentation;
- (id)_initWithActionType:(id)arg1 parameters:(id)arg2;

@end
