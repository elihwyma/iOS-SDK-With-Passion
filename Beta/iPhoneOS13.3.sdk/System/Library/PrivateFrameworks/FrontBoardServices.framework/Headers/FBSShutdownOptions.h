/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@protocol NSCopying;

@interface FBSShutdownOptions : NSObject

{
    NSString *_reason;
    long long _rebootType;
    long long _source;
    long long _LPEMOption;
    id <NSCopying> _localContext;
}

@property (nonatomic) long long LPEMOption;
@property (weak, nonatomic) id <NSCopying> localContext;
@property (copy, nonatomic, readonly) NSString *reason;
@property (nonatomic) long long rebootType;
@property (nonatomic) long long source;
@property (nonatomic, readonly) _Bool isShutdown;
@property (nonatomic, readonly) _Bool isReboot;
@property (nonatomic, readonly) _Bool isUserInitiated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithReason:(id)arg1;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end
