/*
 Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

#import <Foundation/NSObject.h>

#import <FrontBoardServices/Swift-Protocol.h>

@class NSString;

@protocol FBSProcess;

@interface FBSProcessTerminationRequest : NSObject <Swift>

{
    id <FBSProcess> _process;
    NSString *_label;
    unsigned long long _options;
    long long _reportType;
    long long _exceptionCode;
    NSString *_explanation;
}

@property (copy, nonatomic) NSString *label;
@property (weak, nonatomic) id <FBSProcess> process;
@property (nonatomic) unsigned long long options;
@property (nonatomic) long long reportType;
@property (nonatomic) long long exceptionCode;
@property (copy, nonatomic) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)requestForProcess:(id)arg1 withLabel:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)execute;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;

@end
