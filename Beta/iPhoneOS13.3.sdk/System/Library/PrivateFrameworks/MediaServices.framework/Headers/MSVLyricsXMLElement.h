/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSMutableString, NSString;

@interface MSVLyricsXMLElement : NSObject

{
    NSString *_elementName;
    NSString *_identifier;
    NSMutableString *_mutableText;
}

@property (copy, nonatomic) NSString *elementName;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSMutableString *mutableText;

- (id)description;

@end
