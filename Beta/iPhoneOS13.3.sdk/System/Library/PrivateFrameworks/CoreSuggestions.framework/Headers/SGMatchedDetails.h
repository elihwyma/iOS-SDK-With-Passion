/*
 Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface SGMatchedDetails : NSObject

{
    NSMutableDictionary *_tokenDetailMap;
    NSMutableDictionary *_detailTokenMap;
}

+ (_Bool)supportsSecureCoding;
+ (id)matchedDetailsWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1 matchinfoData:(id)arg2 tokens:(id)arg3;
- (id)matchedDetailsForToken:(id)arg1;
- (id)tokensForDetail:(id)arg1;
- (void)_processRawData:(id)arg1 tokens:(id)arg2 contact:(id)arg3;
- (id)_contactDetailFromContact:(id)arg1 column:(unsigned int)arg2 detailEntityId:(id)arg3;
- (_Bool)isEqualToMatchedDetails:(id)arg1;

@end
