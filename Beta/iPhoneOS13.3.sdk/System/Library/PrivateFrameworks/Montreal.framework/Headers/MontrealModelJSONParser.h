/*
 Image: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
 */

#import <NSObject.h>

@class MontrealNNModelNetwork, NSDictionary, NSString;

@interface MontrealModelJSONParser : NSObject

{
    NSString *_jsonDir;
    MontrealNNModelNetwork *_network;
    NSDictionary *_infoDictionary;
}

@property (readonly) NSString *jsonDir;
@property (readonly) MontrealNNModelNetwork *network;
@property (readonly) NSDictionary *infoDictionary;

- (id)initWithURL:(id)arg1;
- (id)createJSONFromFile:(id)arg1;

@end
