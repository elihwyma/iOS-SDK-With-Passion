/*
 Image: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface TILexiconEntry : NSObject

{
    NSString *_userInput;
    NSString *_documentText;
}

@property (nonatomic, readonly) NSString *documentText;
@property (nonatomic, readonly) NSString *userInput;

+ (_Bool)supportsSecureCoding;
+ (id)entryWithDocumentText:(id)arg1 userInput:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
