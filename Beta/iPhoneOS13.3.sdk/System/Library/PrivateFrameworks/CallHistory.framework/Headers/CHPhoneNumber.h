/*
 Image: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
 */

#import <CallHistory/CHLogger.h>

@class NSString;

@interface CHPhoneNumber : CHLogger

{
    _Bool _formattedRepresentationAttempted;
    _Bool _normalizedRepresentationAttempted;
    NSString *_formattedRepresentation;
    NSString *_normalizedRepresentation;
    NSString *_digits;
    NSString *_isoCountryCode;
}

@property (copy, nonatomic, readonly) NSString *digits;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (nonatomic) _Bool formattedRepresentationAttempted;
@property (nonatomic) _Bool normalizedRepresentationAttempted;
@property (copy, nonatomic, readonly) NSString *formattedRepresentation;
@property (copy, nonatomic, readonly) NSString *normalizedRepresentation;

- (id)initWithDigits:(id)arg1 isoCountryCode:(id)arg2;

@end
