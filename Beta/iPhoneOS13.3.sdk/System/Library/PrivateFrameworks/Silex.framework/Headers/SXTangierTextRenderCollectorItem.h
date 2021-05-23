/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <Foundation/NSObject.h>

@class NSString, SXTextTangierFlowInfo, SXTextTangierFlowLayout, SXTextTangierFlowStorage, SXTextTangierStorage, SXTextTangierTextLayout, UIView;

@protocol TSDRepDirectLayerHosting;

@interface SXTangierTextRenderCollectorItem : NSObject

{
    _Bool _selectable;
    SXTextTangierFlowInfo *_flowInfo;
    SXTextTangierStorage *_storage;
    SXTextTangierFlowStorage *_flowStorage;
    NSString *_componentIdentifier;
    UIView<TSDRepDirectLayerHosting> *_directLayerHost;
    SXTextTangierTextLayout *_layout;
    SXTextTangierFlowLayout *_flowLayout;
    struct _NSRange _flowRange;
}

@property (retain, nonatomic) SXTextTangierStorage *storage;
@property (retain, nonatomic) SXTextTangierTextLayout *layout;
@property (retain, nonatomic) SXTextTangierFlowLayout *flowLayout;
@property (nonatomic, readonly) SXTextTangierFlowInfo *flowInfo;
@property (nonatomic, readonly) SXTextTangierFlowStorage *flowStorage;
@property (nonatomic, readonly) struct _NSRange flowRange;
@property (nonatomic, readonly) NSString *componentIdentifier;
@property (nonatomic, readonly) _Bool selectable;
@property (nonatomic, readonly) UIView<TSDRepDirectLayerHosting> *directLayerHost;

- (id)description;
- (id)debugDescription;
- (id)initWithStorage:(id)arg1 layout:(id)arg2 directLayerHost:(id)arg3 selectable:(_Bool)arg4 componentIdentifier:(id)arg5;
- (void)updateWithLayout:(id)arg1;
- (void)appendToFlowStorage:(id)arg1;
- (id)flowLayoutWithICC:(id)arg1;

@end
