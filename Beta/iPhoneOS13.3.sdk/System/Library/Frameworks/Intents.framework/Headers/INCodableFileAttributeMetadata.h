/*
 Image: /System/Library/Frameworks/Intents.framework/Intents
 */

#import <Intents/INCodableAttributeMetadata.h>

@class NSArray, NSString;

@interface INCodableFileAttributeMetadata : INCodableAttributeMetadata

{
    NSString *_type;
    NSArray *_customUTIs;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSArray *customUTIs;
@property (nonatomic, readonly) NSArray *UTIs;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateWithDictionary:(id)arg1;
- (id)dictionaryRepresentationForLanguage:(id)arg1;

@end
