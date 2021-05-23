/*
 Image: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

#import <CryptoTokenKit/TKSmartCardUserInteraction.h>

@class NSArray, NSData, NSLocale;

@interface TKSmartCardUserInteractionForPINOperation : TKSmartCardUserInteraction

{
    NSLocale *_locale;
    unsigned short _resultSW;
    unsigned long long _PINCompletion;
    NSArray *_PINMessageIndices;
    NSData *_resultData;
}

@property unsigned long long PINCompletion;
@property (retain) NSArray *PINMessageIndices;
@property (retain) NSLocale *locale;
@property unsigned short resultSW;
@property (retain) NSData *resultData;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
