/*
 Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface PXMemoriesTitleHelper : NSObject

{
    NSString *_softLineBreak;
    NSString *_truncationToken;
    long long _preferredLineLength;
    double _minimumScaleFactor;
}

@property (copy, nonatomic) NSString *softLineBreak;
@property (copy, nonatomic) NSString *truncationToken;
@property (nonatomic) long long preferredLineLength;
@property (nonatomic) double minimumScaleFactor;

+ (id)defaultHelper;

- (id)init;
- (id)displayableTextForTitle:(id)arg1 intent:(long long)arg2;
- (id)titleForDisplayableText:(id)arg1 titleCategory:(long long)arg2 options:(unsigned long long)arg3;
- (_Bool)_isTextLongerThanPreferredLine:(id)arg1 range:(struct _NSRange)arg2 minimumScaleFactor:(double)arg3;

@end
