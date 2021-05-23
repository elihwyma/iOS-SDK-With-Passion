/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

__attribute__((visibility("hidden")))
@interface _UITextViewRestorableScrollPosition : NSObject <Swift>

{
    struct _NSRange _range;
    double _offsetInLine;
}

+ (id)restorableScrollPositionForTextView:(id)arg1;
+ (id)restorableScrollPositionForStateRestoration:(id)arg1;
+ (id)restorableScrollPositionWithRange:(struct _NSRange)arg1;
+ (id)restorableScrollPositionWithDictionary:(id)arg1;

- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)dictionaryRepresentation;
- (struct _NSRange)range;
- (id)initWithTextView:(id)arg1;
- (double)offsetWithinLine;
- (id)initWithTextViewForStateRestoration:(id)arg1;

@end
