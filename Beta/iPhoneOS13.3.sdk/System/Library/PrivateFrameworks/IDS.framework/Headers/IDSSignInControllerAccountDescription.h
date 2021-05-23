/*
 Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

#import <NSObject.h>

@class NSNumber, NSString;

@interface IDSSignInControllerAccountDescription : NSObject

{
    NSString *_serviceName;
    NSNumber *_state;
    CDUnknownBlockType _completion;
}

@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSNumber *state;
@property (copy, nonatomic) CDUnknownBlockType completion;

@end
