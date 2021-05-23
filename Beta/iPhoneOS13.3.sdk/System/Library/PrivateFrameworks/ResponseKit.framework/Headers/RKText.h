/*
 Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface RKText : NSObject

{
    _Bool _trainVerbatim;
    NSString *_string;
    NSString *_languageID;
    double _trainingWeight;
    NSMutableArray *_annotations;
    NSString *_processedText;
}

@property (retain) NSString *string;
@property (retain) NSString *languageID;
@property double trainingWeight;
@property _Bool trainVerbatim;
@property (retain) NSMutableArray *annotations;
@property (retain) NSString *processedText;

+ (void)initialize;
+ (id)annotationNameFromType:(unsigned long long)arg1;
+ (id)defaultDataProvider;
+ (unsigned long long)annotationTypeFromName:(id)arg1;
+ (id)polarityNameFromType:(unsigned long long)arg1;
+ (unsigned long long)polarityTypeFromName:(id)arg1;

- (id)init;
- (id)taggedText;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2 trainingWeight:(double)arg3 trainVerbatim:(_Bool)arg4;
- (void)annotateRange:(struct _NSRange)arg1 type:(unsigned long long)arg2 machineGenerated:(_Bool)arg3;
- (void)annotateRange:(struct _NSRange)arg1 type:(unsigned long long)arg2;
- (id)subTextWithRange:(struct _NSRange)arg1;
- (id)initWithString:(id)arg1 andLanguageIdentifier:(id)arg2;
- (void)enumerateAnnotationsInRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (_Bool)cleanupData;
- (id)subTextsByPolarity;
- (unsigned long long)annotatedPolarity;
- (id)lsmText;

@end
