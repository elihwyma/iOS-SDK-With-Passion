/*
 Image: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface MSVCLICommand : NSObject

{
    NSDictionary *_cachedOptionsDictionary;
    NSString *_name;
    NSArray *_options;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *options;
@property (nonatomic, readonly) NSDictionary *optionsDictionary;

- (id)init;
- (id)description;
- (id)initWithName:(id)arg1 options:(id)arg2;
- (_Bool)containsOption:(id)arg1;
- (id)valueForOption:(id)arg1;

@end
