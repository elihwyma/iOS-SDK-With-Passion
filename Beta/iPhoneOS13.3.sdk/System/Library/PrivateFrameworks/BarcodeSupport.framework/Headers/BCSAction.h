/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class BCSActionPickerViewAssistant, NSArray, NSDictionary, NSString, NSURL;

@protocol BCSActionDelegate, BCSCodePayload, BCSParsedDataPrivate;

__attribute__((visibility("hidden")))
@interface BCSAction : NSObject

{
    BCSActionPickerViewAssistant *_actionPickerViewAssistant;
    _Bool isInvalidDataAction;
    _Bool isWiFiAction;
    id <BCSActionDelegate> delegate;
    NSURL *urlThatCanBeOpened;
    NSArray *appLinks;
    id <BCSParsedDataPrivate> _data;
    NSURL *_url;
    id <BCSCodePayload> _codePayload;
}

@property (nonatomic, readonly) id <BCSParsedDataPrivate> data;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) id <BCSCodePayload> codePayload;
@property (nonatomic, readonly) long long codeType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (weak, nonatomic) id <BCSActionDelegate> delegate;
@property (nonatomic, readonly) NSURL *urlThatCanBeOpened;
@property (copy, nonatomic, readonly) NSString *defaultActionTargetApplicationBundleIdentifier;
@property (copy, nonatomic, readonly) NSString *localizedDefaultActionTitle;
@property (copy, nonatomic, readonly) NSString *localizedDefaultActionDescription;
@property (copy, nonatomic, readonly) NSString *localizedActionDescription;
@property (copy, nonatomic, readonly) NSArray *actionPickerItems;
@property (copy, nonatomic, readonly) NSDictionary *debugDescriptionDictionary;
@property (copy, nonatomic, readonly) NSString *extraPreviewText;
@property (copy, nonatomic, readonly) NSArray *appLinks;
@property (nonatomic, readonly) _Bool isInvalidDataAction;
@property (nonatomic, readonly) _Bool isWiFiAction;

+ (void)getActionWithData:(id)arg1 codePayload:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

- (long long)type;
- (void)performAction;
- (void)performDefaultAction;
- (id)initWithData:(id)arg1 codePayload:(id)arg2;
- (void)determineActionabilityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)debugDescriptionExtraInfoDictionary;
- (void)showActionPicker;

@end
