/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIDictationToken : NSObject <Swift>

{
    _Bool _removeSpaceBefore;
    _Bool _removeSpaceAfter;
    NSString *_text;
}

@property (copy, nonatomic) NSString *text;
@property (nonatomic) _Bool removeSpaceBefore;
@property (nonatomic, readonly) _Bool removeSpaceAfter;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_descriptionExtra;
- (id)initWithText:(id)arg1 removeSpaceBefore:(_Bool)arg2 removeSpaceAfter:(_Bool)arg3;

@end
