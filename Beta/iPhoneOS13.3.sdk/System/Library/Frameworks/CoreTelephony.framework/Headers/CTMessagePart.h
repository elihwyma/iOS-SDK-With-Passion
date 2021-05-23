/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSData, NSMutableDictionary, NSString;

@interface CTMessagePart : NSObject

{
    NSString *_contentType;
    NSMutableDictionary *_contentTypeParams;
    NSString *_contentId;
    NSString *_contentLocation;
    NSData *_data;
}

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSString *contentId;
@property (copy, nonatomic) NSString *contentLocation;
@property (copy, nonatomic) NSData *data;

- (void)dealloc;
- (id)initWithData:(id)arg1 contentType:(id)arg2;
- (id)contentTypeParameterWithName:(id)arg1;
- (void)addContentTypeParameterWithName:(id)arg1 value:(id)arg2;
- (id)allContentTypeParameterNames;

@end
