/*
 Image: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIPBUninterpretedOption_NamePart : TRIPBMessage

@property (copy, nonatomic) NSString *namePart;
@property (nonatomic) _Bool hasNamePart;
@property (nonatomic) _Bool isExtension;
@property (nonatomic) _Bool hasIsExtension;

+ (id)descriptor;

@end
