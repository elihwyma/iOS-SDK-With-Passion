/*
 Image: /System/Library/Frameworks/Speech.framework/Speech
 */

#import <Foundation/NSObject.h>

@class NSData, NSHTTPURLResponse;

@interface _SFSearchResult : NSObject

{
    NSHTTPURLResponse *_response;
    NSData *_data;
    long long _searchType;
}

@property (nonatomic, readonly) NSHTTPURLResponse *response;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) long long searchType;

- (id)description;
- (id)initWithVoiceSearchResult:(id)arg1;

@end
