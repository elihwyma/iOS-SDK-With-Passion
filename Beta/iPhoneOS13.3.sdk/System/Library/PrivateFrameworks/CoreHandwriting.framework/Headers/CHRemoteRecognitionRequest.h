/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class CHDrawing, NSCharacterSet, NSDictionary, NSLocale;

@interface CHRemoteRecognitionRequest : NSObject

{
    _Bool _shouldUseTextReplacements;
    _Bool _shouldEnableCachingIfAvailable;
    _Bool _hasBeenSubmitted;
    int _recognitionMode;
    int _contentType;
    NSLocale *_locale;
    NSCharacterSet *_activeCharacterSet;
    unsigned long long _maxRecognitionResultCount;
    NSDictionary *_options;
    CHDrawing *_drawing;
    long long _priority;
    struct CGSize _minimumDrawingSize;
}

@property (copy, nonatomic) NSLocale *locale;
@property (nonatomic) int recognitionMode;
@property (nonatomic) struct CGSize minimumDrawingSize;
@property (nonatomic) int contentType;
@property (copy, nonatomic) NSCharacterSet *activeCharacterSet;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) CHDrawing *drawing;
@property (nonatomic) _Bool shouldUseTextReplacements;
@property (nonatomic) _Bool shouldEnableCachingIfAvailable;
@property (nonatomic) _Bool hasBeenSubmitted;
@property (nonatomic) long long priority;

+ (_Bool)supportsSecureCoding;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocale:(id)arg1 recognitionMode:(int)arg2 drawing:(id)arg3 options:(id)arg4 priority:(long long)arg5;
- (_Bool)isEqualToRemoteRecognitionRequest:(id)arg1;
- (id)recognizerConfigurationKey;

@end
