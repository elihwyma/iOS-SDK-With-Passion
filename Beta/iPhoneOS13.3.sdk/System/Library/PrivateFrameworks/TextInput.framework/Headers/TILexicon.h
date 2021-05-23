/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface TILexicon : NSObject

{
    NSArray *_entries;
}

@property (nonatomic, readonly) NSArray *entries;

+ (_Bool)supportsSecureCoding;
+ (void)requestLexiconFromBundlePath:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (id)lexiconWithEntries:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
