/*
 Image: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

#import <Foundation/NSObject.h>

@class NSCharacterSet, NSLocale, NSString, NSXPCConnection;

@interface CHRemoteRecognizer : NSObject

{
    _Bool _shouldEnableCachingIfAvailable;
    _Bool _shouldUseTextReplacements;
    int _recognitionMode;
    int _contentType;
    NSLocale *_locale;
    NSCharacterSet *_activeCharacterSet;
    unsigned long long _maxRecognitionResultCount;
    long long _priority;
    NSXPCConnection *__connection;
    struct CGSize _minimumDrawingSize;
}

@property (nonatomic, readonly) NSXPCConnection *_connection;
@property (nonatomic) _Bool shouldUseTextReplacements;
@property (nonatomic) long long priority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (nonatomic, readonly) int recognitionMode;
@property (nonatomic) int contentType;
@property (copy, nonatomic, readonly) NSLocale *locale;
@property (nonatomic) unsigned long long maxRecognitionResultCount;
@property (retain, nonatomic) NSCharacterSet *activeCharacterSet;
@property (nonatomic) struct CGSize minimumDrawingSize;
@property (nonatomic) _Bool shouldEnableCachingIfAvailable;

+ (long long)maxRequestStrokeCountForLocale:(id)arg1;

- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMode:(int)arg1 locale:(id)arg2;
- (id)textRecognitionResultForDrawing:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)transcriptionPathsForTokenizedTextResult:(id)arg1 withHistory:(id)arg2 scores:(id *)arg3 error:(id *)arg4;
- (void)_teardownXPCConnection;
- (id)_recognitionRequestWithDrawing:(id)arg1 options:(id)arg2;
- (id)_recognitionResultForRequest:(id)arg1 error:(id *)arg2;
- (void)_setupXPCConnectionIfNeeded;
- (_Bool)isEqualToRemoteRecognizer:(id)arg1;

@end
