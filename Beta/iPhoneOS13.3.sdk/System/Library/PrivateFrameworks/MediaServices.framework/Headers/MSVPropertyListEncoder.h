/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSData, NSDateFormatter, NSFileHandle, NSMutableArray, NSMutableData, NSMutableString;

@interface MSVPropertyListEncoder : NSObject

{
    NSData *_arrayOpeningTagData;
    NSData *_arrayClosingTagData;
    NSData *_dictionaryOpeningTagData;
    NSData *_dictionaryClosingTagData;
    NSData *_keyOpeningTagData;
    NSData *_keyClosingTagData;
    NSData *_stringOpeningTagData;
    NSData *_stringClosingTagData;
    NSData *_dataOpeningTagData;
    NSData *_dataClosingTagData;
    NSData *_boolTrueTagData;
    NSData *_boolFalseTagData;
    NSFileHandle *_outputFileHandle;
    NSMutableData *_outputBuffer;
    NSDateFormatter *_dateFormatter;
    NSMutableArray *_containerStack;
    NSMutableString *_tabPrefix;
    NSData *_tabPrefixData;
}

@property (retain, nonatomic) NSFileHandle *outputFileHandle;
@property (retain, nonatomic) NSMutableData *outputBuffer;
@property (retain, nonatomic) NSDateFormatter *dateFormatter;
@property (retain, nonatomic) NSMutableArray *containerStack;
@property (retain, nonatomic) NSMutableString *tabPrefix;
@property (retain, nonatomic) NSData *tabPrefixData;
@property (nonatomic, readonly) NSData *arrayOpeningTagData;
@property (nonatomic, readonly) NSData *arrayClosingTagData;
@property (nonatomic, readonly) NSData *dictionaryOpeningTagData;
@property (nonatomic, readonly) NSData *dictionaryClosingTagData;
@property (nonatomic, readonly) NSData *keyOpeningTagData;
@property (nonatomic, readonly) NSData *keyClosingTagData;
@property (nonatomic, readonly) NSData *stringOpeningTagData;
@property (nonatomic, readonly) NSData *stringClosingTagData;
@property (nonatomic, readonly) NSData *dataOpeningTagData;
@property (nonatomic, readonly) NSData *dataClosingTagData;
@property (nonatomic, readonly) NSData *boolTrueTagData;
@property (nonatomic, readonly) NSData *boolFalseTagData;

- (id)init;
- (void)addObject:(id)arg1;
- (void)close;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)_addObject:(id)arg1;
- (void)endDictionary;
- (void)endArray;
- (void)_writeData:(id)arg1;
- (id)initWithOutputFileHandle:(id)arg1;
- (void)_startArray;
- (void)_writeDictionaryKey:(id)arg1;
- (void)_decrementTabPrefix;
- (void)_startDictionary;
- (void)_flushOutputBuffer;
- (void)_encodeString:(id)arg1;
- (void)_encodeNumber:(id)arg1;
- (void)_encodeDate:(id)arg1;
- (void)_encodeData:(id)arg1;
- (void)_writeString:(id)arg1;
- (void)_incrementTabPrefix;
- (void)startArray;
- (void)startArrayForKey:(id)arg1;
- (void)startDictionary;
- (void)startDictionaryForKey:(id)arg1;

@end
