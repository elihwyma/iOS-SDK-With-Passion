/*
 Image: /System/Library/PrivateFrameworks/TextInputChinese.framework/TextInputChinese
 */

#import <Foundation/NSString.h>

@interface NSString (TIWordSearchCangjie)

- (long long)traditionalChineseZhuyinCompare:(id)arg1;
- (_Bool)containsCangjieWildcard;
- (long long)chinesePinyinCompare:(id)arg1;

@end
