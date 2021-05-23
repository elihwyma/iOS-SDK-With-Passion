/*
 Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

#import <Foundation/NSObject.h>

@class GEOUserSessionEntity, NSArray, NSDictionary, NSString, PARReply;

@interface PARResponse : NSObject

{
    PARReply *_reply;
    NSString *_prefix;
    NSString *_query;
    NSArray *_rawResponse;
    NSArray *_sections;
    NSArray *_results;
    NSDictionary *_rawSqf;
    NSDictionary *_serverFeatures;
    NSArray *_suggestions;
    NSArray *_corrections;
    GEOUserSessionEntity *_geoUserSessionEntity;
}

@property (retain, nonatomic) NSArray *results;
@property (retain, nonatomic) GEOUserSessionEntity *geoUserSessionEntity;
@property (nonatomic, readonly) PARReply *reply;
@property (nonatomic, readonly) NSString *prefix;
@property (nonatomic, readonly) NSString *query;
@property (nonatomic, readonly) NSArray *rawResponse;
@property (nonatomic, readonly) NSArray *sections;
@property (nonatomic, readonly) NSDictionary *rawSqf;
@property (nonatomic, readonly) NSDictionary *serverFeatures;
@property (nonatomic, readonly) NSArray *suggestions;
@property (nonatomic, readonly) NSArray *corrections;

+ (id)responseFromReply:(id)arg1;
+ (id)responseFromJSON:(id)arg1 session:(id)arg2;

- (id)initWithReply:(id)arg1;
- (id)initWithReply:(id)arg1 factory:(id)arg2 responseV2:(id)arg3;

@end
