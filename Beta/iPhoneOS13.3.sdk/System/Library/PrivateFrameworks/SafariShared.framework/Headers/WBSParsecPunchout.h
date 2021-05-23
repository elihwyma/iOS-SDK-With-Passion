/*
 Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

#import <SafariShared/WBSParsecModel.h>

@class NSString, NSURL;

@interface WBSParsecPunchout : WBSParsecModel

{
    NSString *_name;
    NSString *_bundleID;
    NSString *_punchoutLabel;
    NSURL *_punchoutURL;
    NSURL *_installURL;
}

@property (copy, nonatomic, readonly) NSString *name;
@property (copy, nonatomic, readonly) NSString *bundleID;
@property (copy, nonatomic, readonly) NSString *punchoutLabel;
@property (nonatomic, readonly) NSURL *punchoutURL;
@property (nonatomic, readonly) NSURL *installURL;

+ (id)schema;

- (id)initWithDictionary:(id)arg1;

@end
