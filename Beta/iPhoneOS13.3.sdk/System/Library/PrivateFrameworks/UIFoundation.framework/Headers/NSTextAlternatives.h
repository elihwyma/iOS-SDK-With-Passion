/*
 Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface NSTextAlternatives : NSObject

{
    NSString *_primaryString;
    NSArray *_alternativeStrings;
    id _internal;
    _Bool _isLowConfidence;
}

@property (nonatomic) _Bool isLowConfidence;
@property (readonly) NSString *primaryString;
@property (readonly) NSArray *alternativeStrings;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3 isLowConfidence:(_Bool)arg4;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 isLowConfidence:(_Bool)arg3;
- (id)initWithPrimaryString:(id)arg1 alternativeStrings:(id)arg2 identifier:(id)arg3;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2;
- (id)initWithOriginalText:(id)arg1 alternatives:(id)arg2 identifier:(id)arg3;
- (void)noteSelectedAlternativeString:(id)arg1;
- (id)originalText;
- (unsigned long long)numberOfAlternatives;
- (id)alternatives;
- (id)alternativeAtIndex:(unsigned long long)arg1;

@end
