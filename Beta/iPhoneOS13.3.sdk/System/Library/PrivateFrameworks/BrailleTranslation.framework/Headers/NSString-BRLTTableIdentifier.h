/*
 Image: /System/Library/PrivateFrameworks/BrailleTranslation.framework/BrailleTranslation
 */

#import <Foundation/NSString.h>

@interface NSString (BRLTTableIdentifier)

@property (copy, nonatomic, readonly) NSString *brl_serviceIdentifier;
@property (copy, nonatomic, readonly) NSString *brl_language;
@property (copy, nonatomic, readonly) NSString *brl_variant;
@property (copy, nonatomic, readonly) NSString *brl_tableIdentifier;

- (struct _NSRange)_brl_rangeOfLastDot;

@end
