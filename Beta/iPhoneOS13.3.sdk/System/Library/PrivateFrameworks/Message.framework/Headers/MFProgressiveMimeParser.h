/*
 Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>

@class MFMimePart, NSArray, NSData, NSMutableData;

@interface MFProgressiveMimeParser : NSObject

{
    NSMutableData *_data;
    NSArray *_preserveHeaders;
    id _delegate;
    id _context;
    unsigned long long _cursor;
    unsigned long long _lastLength;
    MFMimePart *_topLevelPart;
    MFMimePart *_currentPart;
    NSData *_currentBoundary;
    struct {
        unsigned int delegateBeganMimePart:1;
        unsigned int delegateFinishedMimePart:1;
        unsigned int delegateBeganData:1;
        unsigned int delegateFailed:1;
        unsigned int state:3;
    } _parserFlags;
}

- (void)setDelegate:(id)arg1;
- (id)data;
- (void)start;
- (id)context;
- (void)setContext:(id)arg1;
- (void)_reportError:(id)arg1;
- (id)topLevelPart;
- (void)_initializeTopLevelPartWithHeaders:(id)arg1;
- (void)_continueParsing;
- (id)_currentBoundary;
- (void)_continueParsingStartOfPart;
- (void)_continueParsingHeaders;
- (void)_continueParsingBody;
- (id)initWithBodyData:(id)arg1 topLevelHeaders:(id)arg2 headersToPreserve:(id)arg3;
- (void)noteDataLengthChanged:(unsigned int)arg1;
- (id)currentPart;

@end
