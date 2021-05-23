/*
 Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface MFReformattedAddress : NSObject

{
    NSString *_address;
    struct _NSRange _middleTruncationRange;
}

@property (nonatomic, readonly) NSString *localPart;
@property (nonatomic, readonly) NSString *domainPart;
@property (nonatomic) struct _NSRange middleTruncationRange;

- (id)description;
- (id)initWithAddress:(id)arg1;
- (id)attributedStringWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3;
- (double)widthWithFontSize:(double)arg1 maximumWidth:(double)arg2 options:(unsigned long long)arg3;

@end
