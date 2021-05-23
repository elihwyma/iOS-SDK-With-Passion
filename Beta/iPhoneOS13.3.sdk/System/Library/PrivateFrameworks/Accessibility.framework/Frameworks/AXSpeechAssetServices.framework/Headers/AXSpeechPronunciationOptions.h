/*
 Image: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpeechAssetServices.framework/AXSpeechAssetServices
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXSpeechPronunciationOptions : NSObject

{
    NSString *_orthography;
    NSString *_language;
}

@property (retain, nonatomic) NSString *orthography;
@property (retain, nonatomic) NSString *language;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
