/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <Foundation/NSValue.h>

@class NSString;

@interface NSValue (RERectExtension)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)re_valueWithCGRect:(struct CGRect)arg1;

- (struct CGRect)re_CGRectValue;
- (unsigned long long)re_actionIdentifierHashValue;

@end
