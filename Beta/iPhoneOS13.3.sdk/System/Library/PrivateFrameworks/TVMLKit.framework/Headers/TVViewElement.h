/*
 Image: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
 */

#import <Foundation/NSObject.h>

@class IKViewElement, NSArray, NSDictionary, NSString, TVViewElementStyle;

@interface TVViewElement : NSObject

{
    _Bool _disabled;
    _Bool _parsedOnce;
    IKViewElement *_element;
}

@property (weak, nonatomic, readonly) IKViewElement *element;
@property (nonatomic, readonly) long long semanticContentAttribute;
@property (nonatomic, getter=isParsedOnce) _Bool parsedOnce;
@property (nonatomic, readonly) NSString *elementIdentifier;
@property (nonatomic, readonly) NSString *elementName;
@property (weak, nonatomic, readonly) TVViewElement *parentViewElement;
@property (nonatomic, readonly) NSArray *childViewElements;
@property (nonatomic, readonly) NSDictionary *attributes;
@property (nonatomic, readonly) TVViewElementStyle *style;
@property (nonatomic, readonly) NSString *autoHighlightIdentifier;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic, readonly) long long updateType;
@property (nonatomic, readonly) NSDictionary *elementData;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)resetProperty:(long long)arg1;
- (id)initWithViewElement:(id)arg1;
- (void)dispatchEventOfType:(long long)arg1 canBubble:(_Bool)arg2 cancellable:(_Bool)arg3 extraInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)dispatchEventWithName:(id)arg1 canBubble:(_Bool)arg2 cancellable:(_Bool)arg3 extraInfo:(id)arg4 completion:(CDUnknownBlockType)arg5;

@end
