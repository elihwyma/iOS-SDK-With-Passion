/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@interface PXCMMSharePromptStringGenerator : NSObject

+ (id)sharePromptStringWithAttributes:(id)arg1 boldFont:(struct UIFont *)arg2 lines:(long long)arg3 width:(double)arg4 names:(id)arg5 containsUnverifiedPersons:(_Bool)arg6;
+ (id)_attributedStringWithString:(id)arg1 attributes:(id)arg2 boldFont:(struct UIFont *)arg3 boldRange1:(struct _NSRange)arg4 boldRange2:(struct _NSRange)arg5;
+ (id)_stringWithComponentsCount:(unsigned long long)arg1 components:(id)arg2 containsOtherPeople:(_Bool)arg3 outBoldRange1:(struct _NSRange *)arg4 outBoldRange2:(struct _NSRange *)arg5;

@end
