/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

@interface UILexiconEntry : NSObject <Swift>

{
    NSString *_userInput;
    NSString *_documentText;
}

@property (nonatomic, readonly) NSString *documentText;
@property (nonatomic, readonly) NSString *userInput;

+ (id)_entryWithTILexiconEntry:(id)arg1;

- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
