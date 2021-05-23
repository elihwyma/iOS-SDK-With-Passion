/*
 Image: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
 */

@protocol ServiceInterface

- (unsigned short)performQueryOnEntity:pred:sort:actions:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)setOption:inScopes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getOption:inScopes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetDataFor:nameKind:inScopes:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)createSnapshotFor:pred:actions:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)subscribeToNOIsFor:orPredicate:options: /* Error: Ran out of types for this method. */;
- (unsigned short)inquireNOIFor:orPredicate:requestedKeys:options:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)unsubscribeToNOIs: /* Error: Ran out of types for this method. */;
- (unsigned short)identifierForUUID:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)trainModelAndScore:lastScoreDate:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)performPersistentStoreHealthCheckWithReply: /* Error: Ran out of types for this method. */;
- (unsigned short)setUsageOption:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)resetUsageFor:nameKind:reply: /* Error: Ran out of types for this method. */;
- (unsigned short)getNetworkBitmapsWithNames:startTime:endTime:Reply: /* Error: Ran out of types for this method. */;

@end
