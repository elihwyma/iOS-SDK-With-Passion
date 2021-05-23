/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSAttributedString.h>

@class NSString;

@interface NSAttributedString (HFStringGeneratoreAdditions)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)dynamicStringForSize:(struct CGSize)arg1 attributes:(id)arg2;
- (id)stringWithAttributes:(id)arg1;
- (_Bool)prefersDynamicString;
- (id)_synthesizeAttributedSubstringFromRange:(struct _NSRange)arg1 usingDefaultAttributes:(id)arg2;

@end
