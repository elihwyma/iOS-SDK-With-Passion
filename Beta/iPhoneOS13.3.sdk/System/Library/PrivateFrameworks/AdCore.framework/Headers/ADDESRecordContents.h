/*
 Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

#import <Foundation/NSObject.h>

@class ADVector, NSString;

@interface ADDESRecordContents : NSObject

{
    _Bool _addImpression;
    _Bool _addTap;
    NSString *_adamID;
    NSString *_query;
    ADVector *_appVector;
    double _pTTR;
    NSString *_obfuscationID;
}

@property (retain, nonatomic) NSString *adamID;
@property (nonatomic) _Bool addImpression;
@property (nonatomic) _Bool addTap;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) ADVector *appVector;
@property (nonatomic) double pTTR;
@property (retain, nonatomic) NSString *obfuscationID;

- (id)init;
- (void)overridePTTRData;
- (void)overrideObfuscationID;
- (void)overrideAppVector:(id)arg1 vector:(id)arg2;
- (void)collectODMLResponse:(id)arg1;

@end
