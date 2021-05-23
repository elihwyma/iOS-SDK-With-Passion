/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString, NSURL;

@interface UIPrinter : NSObject

{
    id _printerInfo;
    NSURL *URL;
}

@property (copy, readonly) NSURL *URL;
@property (copy, readonly) NSString *displayName;
@property (copy, readonly) NSString *displayLocation;
@property (readonly) long long supportedJobTypes;
@property (copy, readonly) NSString *makeAndModel;
@property (readonly) _Bool supportsColor;
@property (readonly) _Bool supportsDuplex;

+ (id)printerWithURL:(id)arg1;

- (id)init;
- (id)_initWithURL:(id)arg1;
- (id)_initWithPrinter:(id)arg1;
- (id)_internalPrinter;
- (void)contactPrinter:(CDUnknownBlockType)arg1;

@end
