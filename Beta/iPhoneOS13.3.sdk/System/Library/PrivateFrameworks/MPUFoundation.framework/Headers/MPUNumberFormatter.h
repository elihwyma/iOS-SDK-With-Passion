/*
 Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

#import <Foundation/NSFormatter.h>

@interface MPUNumberFormatter : NSFormatter

{
    void **_shortNumberFormatter;
}

- (id)init;
- (void)dealloc;
- (void)resetFormatter;
- (void)createFormatter;
- (id)shortStringFromNumber:(long long)arg1;

@end
