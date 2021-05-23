/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class MSVLyricsSongInfo, MSVLyricsTextElement, NSData, NSError, NSInputStream, NSMutableArray, NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface MSVLyricsTTMLParser : NSObject

{
    _Bool _linesAreSortedByStartTime;
    NSData *_ttmlData;
    NSInputStream *_inputStream;
    NSObject<OS_dispatch_queue> *_parseQueue;
    MSVLyricsSongInfo *_lyricsInfo;
    NSError *_parserError;
    NSMutableArray *_elementStack;
    NSMutableArray *_lyricLines;
    MSVLyricsTextElement *_currentTextElement;
    NSMutableDictionary *_translationsMap;
    double _currentStartTime;
}

@property (retain, nonatomic) NSData *ttmlData;
@property (retain, nonatomic) NSInputStream *inputStream;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *parseQueue;
@property (retain, nonatomic) MSVLyricsSongInfo *lyricsInfo;
@property (retain, nonatomic) NSError *parserError;
@property (retain, nonatomic) NSMutableArray *elementStack;
@property (retain, nonatomic) NSMutableArray *lyricLines;
@property (retain, nonatomic) MSVLyricsTextElement *currentTextElement;
@property (retain, nonatomic) NSMutableDictionary *translationsMap;
@property (nonatomic) double currentStartTime;
@property (nonatomic) _Bool linesAreSortedByStartTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (void)parser:(id)arg1 foundCharacters:(id)arg2;
- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;
- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;
- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;
- (id)initWithTTMLStream:(id)arg1;
- (id)parseWithError:(id *)arg1;
- (id)initWithTTMLData:(id)arg1;
- (void)parseWithCompletion:(CDUnknownBlockType)arg1;

@end
