/*
 Image: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
 */

#import <RelevanceEngine/REHTMLElement.h>

@class NSData;

@interface REHTMLDataElement : REHTMLElement

{
    NSData *_data;
}

- (id)initWithData:(id)arg1;
- (id)_encodedData;

@end
