/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <CoreHandwriting/Swift-Protocol.h>

@class NSCharacterSet, NSLocale;

@protocol CHRecognizing <Swift>

@property (nonatomic, readonly) int recognitionMode;
@property (nonatomic) int contentType;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property (nonatomic) struct CGSize minimumDrawingSize;
@property (nonatomic) _Bool shouldEnableCachingIfAvailable;

- (unsigned short)initWithMode:locale: /* Error: Ran out of types for this method. */;

@end
