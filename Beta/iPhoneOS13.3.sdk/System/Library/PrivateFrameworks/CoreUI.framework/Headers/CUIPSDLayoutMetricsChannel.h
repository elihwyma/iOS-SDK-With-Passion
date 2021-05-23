/*
 Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CUIPSDLayoutMetricsChannel : NSObject

{
    struct CGRect _edgeInsets;
    NSString *_name;
}

@property (nonatomic, readonly) struct CGRect edgeInsets;
@property (retain, nonatomic) NSString *name;

- (void)dealloc;
- (void)setEdgeInsets:(struct CGRect)arg1;
- (void)sanitizeEdgeInsets;
- (id)initWithEdgeInsets:(struct CGRect)arg1;

@end
