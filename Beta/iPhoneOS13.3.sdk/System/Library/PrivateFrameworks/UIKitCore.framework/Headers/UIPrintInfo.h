/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSDictionary, NSString;

@interface UIPrintInfo : NSObject <Swift>

{
    NSString *_printerID;
    NSString *_jobName;
    long long _outputType;
    long long _orientation;
    long long _duplex;
    long long _copies;
    _Bool _scaleUp;
    _Bool _staple;
    _Bool _punch;
    _Bool _imagePDFAnnotations;
    NSString *_jobAccountID;
    NSString *_pdfPassword;
}

@property (nonatomic) long long copies;
@property (nonatomic) _Bool staple;
@property (nonatomic) _Bool punch;
@property (retain, nonatomic) NSString *jobAccountID;
@property (nonatomic) _Bool scaleUp;
@property (retain, nonatomic) NSString *pdfPassword;
@property (nonatomic) _Bool imagePDFAnnotations;
@property (copy, nonatomic) NSString *printerID;
@property (copy, nonatomic) NSString *jobName;
@property (nonatomic) long long outputType;
@property (nonatomic) long long orientation;
@property (nonatomic) long long duplex;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)printInfo;
+ (id)printInfoWithDictionary:(id)arg1;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (void)_updateWithPrinter:(id)arg1;
- (id)_createPrintSettingsForPrinter:(id)arg1;

@end
