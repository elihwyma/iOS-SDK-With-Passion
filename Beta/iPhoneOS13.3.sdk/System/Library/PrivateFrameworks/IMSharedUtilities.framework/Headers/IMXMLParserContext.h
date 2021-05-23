/*
 Image: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
 */

#import <Foundation/NSObject.h>

@class NSArray, NSData, NSString;

@interface IMXMLParserContext : NSObject

{
    NSData *_inContentAsData;
}

@property (retain, readonly) NSData *inContentAsData;
@property (retain, readonly) NSString *name;
@property (retain, readonly) NSArray *resultsForLogging;

- (void)dealloc;
- (void)reset;
- (id)initWithContent:(id)arg1;
- (id)initWithContentAsData:(id)arg1;
- (id)inContent;

@end
