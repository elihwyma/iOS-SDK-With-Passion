/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

@class NSString;

@interface WBSParsecAuxiliaryInfo : WBSParsecModel

{
    NSString *_topText;
    NSString *_middleText;
    NSString *_bottomText;
    NSString *_bottomTextColor;
}

@property (copy, nonatomic, readonly) NSString *topText;
@property (copy, nonatomic, readonly) NSString *middleText;
@property (copy, nonatomic, readonly) NSString *bottomText;
@property (copy, nonatomic, readonly) NSString *bottomTextColor;

+ (id)schema;

- (id)initWithDictionary:(id)arg1;

@end
