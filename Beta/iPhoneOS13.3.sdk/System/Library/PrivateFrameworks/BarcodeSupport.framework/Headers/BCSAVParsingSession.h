/*
 Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

#import <Foundation/NSObject.h>

@class BCSQRCodeParser, NSDictionary;

@interface BCSAVParsingSession : NSObject

{
    BCSQRCodeParser *_parser;
    NSDictionary *_lastScannedCodeBasicDescriptor;
    double _lastScannedTime;
}

- (id)init;
- (void)dealloc;
- (void)updateSessionWithMetadataObjects:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_isLikelyLastScannedObject:(id)arg1;
- (id)_bestObjectForParsing:(id)arg1;
- (void)_updateSessionWithMetadataObject:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (double)_temporalStickyFactorForObject:(id)arg1;
- (void)updateSessionWithMetadataObjects:(id)arg1;

@end
