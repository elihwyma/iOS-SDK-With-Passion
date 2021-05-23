/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <BarcodeSupport/Swift-Protocol.h>

@class NSArray, NSDictionary, NSString;

@protocol BCSActionPrivate <Swift>

@property (copy, nonatomic, readonly) NSDictionary *debugDescriptionDictionary;
@property (copy, nonatomic, readonly) NSString *extraPreviewText;
@property (copy, nonatomic, readonly) NSArray *appLinks;
@property (nonatomic, readonly) _Bool isInvalidDataAction;
@property (nonatomic, readonly) _Bool isWiFiAction;

@end
