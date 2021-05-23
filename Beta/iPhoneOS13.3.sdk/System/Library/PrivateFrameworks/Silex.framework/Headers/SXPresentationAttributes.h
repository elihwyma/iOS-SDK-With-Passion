/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface SXPresentationAttributes : NSObject

{
    _Bool _fadeInComponents;
    _Bool _enableViewportDebugging;
    _Bool _testingConditionEnabled;
    NSString *_contentSizeCategory;
    unsigned long long _presentationMode;
    double _contentScaleFactor;
    struct CGSize _canvasSize;
}

@property (nonatomic) struct CGSize canvasSize;
@property (retain, nonatomic) NSString *contentSizeCategory;
@property (nonatomic) unsigned long long presentationMode;
@property (nonatomic) _Bool fadeInComponents;
@property (nonatomic) double contentScaleFactor;
@property (nonatomic) _Bool enableViewportDebugging;
@property (nonatomic) _Bool testingConditionEnabled;

- (id)init;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
