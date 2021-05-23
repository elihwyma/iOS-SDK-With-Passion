/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSArray, NSDictionary, NSItemProvider, NSString, UITextPasteCoordinator;

__attribute__((visibility("hidden")))
@interface UITextPasteItem : NSObject <Swift>

{
    _Bool _forcesDefaultAttributes;
    NSItemProvider *_itemProvider;
    id _localObject;
    NSDictionary *_defaultAttributes;
    UITextPasteCoordinator *_coordinator;
    NSArray *_supportedPasteConfigurationClasses;
    NSDictionary *_documentOptions;
}

@property (retain, nonatomic) NSItemProvider *itemProvider;
@property (retain, nonatomic) id localObject;
@property (retain, nonatomic) NSDictionary *defaultAttributes;
@property (nonatomic, readonly) UITextPasteCoordinator *coordinator;
@property (retain, nonatomic) NSArray *supportedPasteConfigurationClasses;
@property (nonatomic) _Bool forcesDefaultAttributes;
@property (copy, nonatomic) NSDictionary *documentOptions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)setNoResult;
- (void)setStringResult:(id)arg1;
- (void)setAttributedStringResult:(id)arg1;
- (void)setAttachmentResult:(id)arg1;
- (void)setDefaultResult;
- (id)initWithTextPasteCoordinator:(id)arg1;

@end
